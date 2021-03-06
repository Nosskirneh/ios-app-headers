//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol MDXScreenDiscoveryDelegate;

@protocol MDXScreenDiscovery <NSObject>
@property(readonly, nonatomic) NSArray *screens;
@property(nonatomic) __weak id <MDXScreenDiscoveryDelegate> delegate;
- (void)stopDiscovery;
- (void)startDiscovery;
@end

