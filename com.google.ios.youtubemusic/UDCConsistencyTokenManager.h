//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, UDCConsistencyInfo;

@interface UDCConsistencyTokenManager : NSObject
{
    NSTimer *_expirationTimer;
    UDCConsistencyInfo *_consistencyInfo;
    NSString *_token;
}

+ (id)sharedInstance;
@property(copy) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)consistencyInfo;
- (void)expireToken;
- (void)updateTokenWithHeader:(id)arg1;
- (id)apiHeader;

@end

