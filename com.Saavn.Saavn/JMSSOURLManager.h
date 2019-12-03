//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol JMSSOModeInfo;

@interface JMSSOURLManager : NSObject
{
    id <JMSSOModeInfo> _modeInfo;
    NSString *_baseURL;
    NSString *_secureBaseURL;
}

- (void).cxx_destruct;
- (id)getOTPLoginURL;
- (id)getUrlForReceivingOTP;
- (id)getSessionURLWithEndPoint:(id)arg1;
- (id)getRefreshSSOTokenURL;
- (id)getForgotPasswordURL;
- (id)getSignUpURL;
- (id)getZLALoginURL;
- (id)getUNPWLoginURL;
- (void)loadBaseURLs;
- (id)initWithModeInfo:(id)arg1;

@end
