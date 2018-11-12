//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTSearch2FancyRecentsDataSourceProviding-Protocol.h"

@class NSMapTable, NSString;
@protocol SPTLocalSettings;

@interface SPTSearch2FancyRecentsDataSourceProvider : NSObject <SPTSearch2FancyRecentsDataSourceProviding>
{
    id <SPTLocalSettings> _localSettings;
    NSMapTable *_dataSources;
    NSString *_storageKeyPrefix;
    unsigned long long _maxItemsCount;
}

@property(readonly, nonatomic) unsigned long long maxItemsCount; // @synthesize maxItemsCount=_maxItemsCount;
@property(readonly, copy, nonatomic) NSString *storageKeyPrefix; // @synthesize storageKeyPrefix=_storageKeyPrefix;
@property(readonly, nonatomic) NSMapTable *dataSources; // @synthesize dataSources=_dataSources;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (id)provideDataSourceForGroupID:(id)arg1;
- (id)initWithLocalSettings:(id)arg1 storageKeyPrefix:(id)arg2 maxItemsCount:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

