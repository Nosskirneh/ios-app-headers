//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTStateController <NSObject>
+ (NSString *)saveStateLockPath;
- (void)abortLoading:(id)arg1;
- (void)clearInvalidStoredState;
- (void)clearState;
- (_Bool)hasSavedState;
- (_Bool)isRestoring;
@end

