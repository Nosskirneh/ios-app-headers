//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIDCallbackQueue.h"

@class GTMOAuth2Authentication, NSError, NSString;

@interface GIDAuthFlow : GIDCallbackQueue
{
    GTMOAuth2Authentication *_auth;
    NSError *_error;
    NSString *_emmSupport;
}

@property(copy, nonatomic) NSString *emmSupport; // @synthesize emmSupport=_emmSupport;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GTMOAuth2Authentication *auth; // @synthesize auth=_auth;
- (void).cxx_destruct;

@end
