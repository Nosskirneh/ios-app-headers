//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPFacebookSSO : NSObject
{
    id <SPTFacebookSDK> _facebookSDK;
}

@property(retain, nonatomic) id <SPTFacebookSDK> facebookSDK; // @synthesize facebookSDK=_facebookSDK;
- (void).cxx_destruct;
- (id)errorForFacebookSDKError:(id)arg1;
- (void)attemptFacebookSSOWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFacebookSDK:(id)arg1;

@end

