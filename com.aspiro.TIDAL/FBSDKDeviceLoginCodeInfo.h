//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;

@interface FBSDKDeviceLoginCodeInfo : NSObject
{
    NSString *_identifier;
    NSString *_loginCode;
    NSURL *_verificationURL;
    NSDate *_expirationDate;
    unsigned long long _pollingInterval;
}

@property(readonly, nonatomic) unsigned long long pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSURL *verificationURL; // @synthesize verificationURL=_verificationURL;
@property(readonly, copy, nonatomic) NSString *loginCode; // @synthesize loginCode=_loginCode;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 loginCode:(id)arg2 verificationURL:(id)arg3 expirationDate:(id)arg4 pollingInterval:(unsigned long long)arg5;

@end

