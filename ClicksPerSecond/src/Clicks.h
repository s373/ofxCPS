// ClicksPerSecond
//
// Copyright (c) 2019 s373.net/x art codex studios
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include "ofxCPS.h"

#include "ofMain.h"

struct Clicks : public ofBaseApp {

public:

	ofxCPS	clickspersecond;

	float 	param, carry;

	void mouseReleased(int a, int b, int c){

		clickspersecond.click();

	}

	void keyReleased(int a){

		if(a=='s'){
			ofSaveFrame();
		}
		else
			clickspersecond.resetcount();

	}

	void setup(){

		ofSetWindowTitle("ClicksPerSecond");

		ofSetFrameRate(10);

		clickspersecond.setup();

		param = carry = 0;

	}

	void update(){

		clickspersecond.update();

	}

	void draw(){

		std::string inf = "ClicksPerSecond: \n(min,clicks,max,avg,elapsed)\n";

		param += (clickspersecond.getavg() - param) * clickspersecond.getirr();

		inf += ofToString( clickspersecond.getminclicks() ) 				+ " " +

		ofToString( clickspersecond.getclicks() ) 						  + " " +

		ofToString( clickspersecond.getmaxclicks() )				 		 + " " +

		ofToString( clickspersecond.getavg() ) 							   + " " +

		ofToString( clickspersecond.getelapsed() ) 							   + "\'\'\n";

		const std::vector<int> * story = clickspersecond.gethistory();

		for(int i=0;;){
			inf += ofToString( ( * story ).at(i++) ) + " ";
			if(i == ((*story).size()-1)) { break; }
		}
		inf += "\n\n\n\n\n\n\n\n\n\n\n\n\n(s) save img, \nother keys resetcount";

		ofBackground(255);

		ofSetColor(0,167);

		ofDrawBitmapString(inf, 2, 12);

		carry += ofMap(param, 0, 12, 0., -5*PI);

		float s = ofMap(param, 0, 12, 20, 127);

		glPushMatrix();

		glTranslatef( 127, 127, 1.61 );

		glRotatef( carry, 1.02, 0., 1.0 );

		ofTriangle(0,-s*2,-s,0,s,0);

		glPopMatrix();
	}

};
