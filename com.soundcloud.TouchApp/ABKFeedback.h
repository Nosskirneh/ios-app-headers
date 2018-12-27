//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABKDevice, NSString;

@interface ABKFeedback : NSObject
{
    _Bool _isBug;
    NSString *_message;
    NSString *_email;
    ABKDevice *_device;
    NSString *_appVersion;
}

@property(retain) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain) ABKDevice *device; // @synthesize device=_device;
@property _Bool isBug; // @synthesize isBug=_isBug;
@property(copy) NSString *email; // @synthesize email=_email;
@property(copy) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (int)feedbackValidation;
- (id)proxyForJson:(unsigned long long)arg1;
- (id)initWithFeedbackMessage:(id)arg1 email:(id)arg2 isBug:(_Bool)arg3;
- (id)init;

@end

