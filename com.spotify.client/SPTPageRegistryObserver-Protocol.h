//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, UIViewController;
@protocol SPTPageRegistry;

@protocol SPTPageRegistryObserver <NSObject>

@optional
- (void)pageRegistryDidUnregisterFeaturePages:(id <SPTPageRegistry>)arg1;
- (void)pageRegistry:(id <SPTPageRegistry>)arg1 didCreateViewController:(UIViewController *)arg2 forViewURI:(NSURL *)arg3;
@end

