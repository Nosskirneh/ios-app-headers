//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GIDEMMErrorHandler : NSObject
{
    _Bool _pendingDialog;
}

+ (id)sharedInstance;
- (id)cancelString;
- (id)okayString;
- (id)settingsString;
- (id)deviceNotCompliantString;
- (id)appVerificationActionString;
- (id)appVerificationTextString;
- (id)appVerificationTitleString;
- (id)passcodeRequiredString;
- (id)unableToAccessString;
- (id)appVerificationRequiredAlertWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)passcodeRequiredAlertWithCompletion:(CDUnknownBlockType)arg1;
- (id)deviceNotCompliantAlertWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)handleErrorFromResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
