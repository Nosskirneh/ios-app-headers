//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTEntitySeeAllSongsRegistry-Protocol.h"

@class NSMapTable, NSString;

@interface SPTEntitySeeAllSongsRegistryImplementation : NSObject <SPTEntitySeeAllSongsRegistry>
{
    NSMapTable *_dataSources;
}

@property(readonly, nonatomic) NSMapTable *dataSources; // @synthesize dataSources=_dataSources;
- (void).cxx_destruct;
- (id)init;
- (id)dataSourceForURL:(id)arg1;
- (void)unregisterDataSourceForURL:(id)arg1;
- (void)registerDataSource:(id)arg1 forURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

