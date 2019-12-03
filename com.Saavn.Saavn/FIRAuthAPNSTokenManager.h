//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRAuthAPNSToken, NSMutableArray, UIApplication;

@interface FIRAuthAPNSTokenManager : NSObject
{
    UIApplication *_application;
    NSMutableArray *_pendingCallbacks;
    FIRAuthAPNSToken *_token;
    double _timeout;
}

+ (_Bool)isProductionApp;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) FIRAuthAPNSToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)callBackWithToken:(id)arg1 error:(id)arg2;
- (void)cancelWithError:(id)arg1;
- (void)getTokenWithCallback:(CDUnknownBlockType)arg1;
- (id)initWithApplication:(id)arg1;

@end
