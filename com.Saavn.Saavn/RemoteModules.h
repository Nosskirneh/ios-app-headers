//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface RemoteModules : NSObject
{
    NSMutableSet *loadingIndexes;
    NSMutableSet *failedIndexes;
    unsigned long long _manualSectionOffset;
}

@property(nonatomic) unsigned long long manualSectionOffset; // @synthesize manualSectionOffset=_manualSectionOffset;
- (void).cxx_destruct;
- (void)loadRemoteSection:(id)arg1 atIndex:(unsigned long long)arg2 withParams:(id)arg3 success:(CDUnknownBlockType)arg4 andFailure:(CDUnknownBlockType)arg5;
- (_Bool)shouldHideModule:(unsigned long long)arg1;
- (_Bool)isLoadingModule:(unsigned long long)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (void)successfullyLoadedIndex:(unsigned long long)arg1;
- (void)loadingIndex:(unsigned long long)arg1;
- (id)init;

@end

