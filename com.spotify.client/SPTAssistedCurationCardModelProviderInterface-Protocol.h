//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@protocol SPTAssistedCurationCardModelProviderInterface <NSObject>
@property(nonatomic) __weak id <SPTAssistedCurationCardModelProviderInterfaceDelegate> providerDelegate;
- (void)insertTracks:(NSArray *)arg1 atIndex:(unsigned long long)arg2;
- (void)appendTracks:(NSArray *)arg1;
@end
