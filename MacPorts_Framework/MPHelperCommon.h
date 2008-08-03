/*
 *  MPHelperCommon.h
 *  MacPorts.Framework
 *
 *  Created by George  Armah on 7/31/08.
 *  Copyright 2008 Lafayette College. All rights reserved.
 *
 */

#ifndef _MPHELPERCOMMON_H
#define _MPHELPERCOMMON_H

#include "BetterAuthorizationSampleLib.h"
#include <tcl.h>

#define asl_NSLog(client, msg, level, format, ...) asl_log(client, msg, level, "%s", [[NSString stringWithFormat:format, ##__VA_ARGS__] UTF8String])

//We need only one command for this Tool

#define kMPHelperEvaluateTclCommand					"EvaluateTcl"

	// authorization right name
	
	#define kMPHelperEvaluateTclRightsName			"com.MacPorts.MacPortsFramework.EvaluateTcl"

	// request  keys 
	// Should I put the NSError object in the request dictionary ? 
	// I'll try that for now and see how it goes
	
	//String to be Evlauted
	#define kTclStringToBeEvaluated		"TclString"					//CFString 
	

	//response keys
	#define kTclStringEvaluationResult	"TclStringEvaluationResult"		//CFString

	//Actually hold off doing errors for now
	//NSError object we are passing
	#define kNSError				"NSError"				//Am I allowed to pass in an NSError object?
																	//Lets make it a string for now

	//Key for Testing Distributed Object implementation
	#define kMPInterpreterDistObj		"MPInterpreterDistObj"

extern const BASCommandSpec kMPHelperCommandSet[];

#endif