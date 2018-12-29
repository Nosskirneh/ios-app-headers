//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ResetPasswordCallFactory, SoundCloudApiDispatcher;

@interface ResetPasswordApi : NSObject
{
    ResetPasswordCallFactory *_resetPasswordCallFactory;
    SoundCloudApiDispatcher *_apiDispatcher;
}

@property(readonly, nonatomic) SoundCloudApiDispatcher *apiDispatcher; // @synthesize apiDispatcher=_apiDispatcher;
@property(readonly, nonatomic) ResetPasswordCallFactory *resetPasswordCallFactory; // @synthesize resetPasswordCallFactory=_resetPasswordCallFactory;
- (void).cxx_destruct;
- (id)resetPasswordForUserWithEmail:(id)arg1;
- (id)initWithResetPasswordFactory:(id)arg1 apiDispatcher:(id)arg2;
- (id)init;

@end
