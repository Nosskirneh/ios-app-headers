//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol SPTYourLibraryModel;

@protocol SPTYourLibraryModelObserver <NSObject>
- (void)yourLibraryModel:(id <SPTYourLibraryModel>)arg1 didUpdatePageProviders:(NSArray *)arg2 groupData:(NSArray *)arg3;
@end

