//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GSCConsistencyTokenManager : NSObject
{
    NSString *_token;
    long long _tokenExpiryTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *token;
- (void)updateTokenWithHeader:(id)arg1;

@end

