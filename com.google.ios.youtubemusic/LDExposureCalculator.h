//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LDExposureCalculator : NSObject
{
    _Bool _enableAppStateCheck;
    _Bool _useHierarchyTraversal;
}

@property(nonatomic) _Bool useHierarchyTraversal; // @synthesize useHierarchyTraversal=_useHierarchyTraversal;
- (_Bool)isAppExtension;
- (double)calculateScreenShareOfAdBlock:(id)arg1 usingView:(id)arg2 mainView:(id)arg3 coverage:(double)arg4;
- (struct LDAdState)adStateCalculatedFromAdBlock:(id)arg1 usingView:(id)arg2 mainView:(id)arg3;
- (id)initWithEnableAppStateCheck:(_Bool)arg1;

@end

