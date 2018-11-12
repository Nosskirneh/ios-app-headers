//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTSignupFieldValidator-Protocol.h"

@class NSString, SPTSignupEmailBackendValidator;

@interface SPTSignupEmailFieldValidator : NSObject <SPTSignupFieldValidator>
{
    SPTSignupEmailBackendValidator *_emailBackendValidator;
    CDUnknownBlockType _lastDispatchBlock;
}

@property(copy, nonatomic) CDUnknownBlockType lastDispatchBlock; // @synthesize lastDispatchBlock=_lastDispatchBlock;
@property(retain, nonatomic) SPTSignupEmailBackendValidator *emailBackendValidator; // @synthesize emailBackendValidator=_emailBackendValidator;
- (void).cxx_destruct;
- (id)localValidationErrorWithObject:(id)arg1;
- (id)localValidationErrorWithEmail:(id)arg1;
- (id)errorForCode:(unsigned long long)arg1;
- (void)validateObject:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)validateEmail:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)scheduleBackendValidationFor:(id)arg1 validationBlock:(CDUnknownBlockType)arg2;
- (id)initWithEmailBackendValidator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

