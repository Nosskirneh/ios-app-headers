//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSUbiquitousKeyValueStore;
@protocol VOXRadioiCloudFavoriteStorageDelegate;

@interface VOXRadioiCloudFavoriteStorage : NSObject
{
    id <VOXRadioiCloudFavoriteStorageDelegate> _delegate;
    NSArray *_favoriteStationIds;
    NSUbiquitousKeyValueStore *_store;
}

@property(retain) NSUbiquitousKeyValueStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSArray *favoriteStationIds; // @synthesize favoriteStationIds=_favoriteStationIds;
@property __weak id <VOXRadioiCloudFavoriteStorageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyValueStorageDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end
