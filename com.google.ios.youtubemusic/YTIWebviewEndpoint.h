//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand;

@interface YTIWebviewEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(nonatomic) _Bool authenticateWithGoogleAccount; // @dynamic authenticateWithGoogleAccount;
@property(copy, nonatomic) NSString *endBaseURL; // @dynamic endBaseURL;
@property(retain, nonatomic) YTICommand *endNavigationEndpoint; // @dynamic endNavigationEndpoint;
@property(nonatomic) _Bool hasAuthenticateWithGoogleAccount; // @dynamic hasAuthenticateWithGoogleAccount;
@property(nonatomic) _Bool hasEndBaseURL; // @dynamic hasEndBaseURL;
@property(nonatomic) _Bool hasEndNavigationEndpoint; // @dynamic hasEndNavigationEndpoint;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;

@end

