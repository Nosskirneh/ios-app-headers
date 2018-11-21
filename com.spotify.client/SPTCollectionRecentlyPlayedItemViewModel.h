//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL;
@protocol SPTRecentlyPlayedItem;

@interface SPTCollectionRecentlyPlayedItemViewModel : NSObject
{
    NSString *_subtitle;
    id <SPTRecentlyPlayedItem> _entityListItem;
}

@property(readonly, nonatomic) id <SPTRecentlyPlayedItem> entityListItem; // @synthesize entityListItem=_entityListItem;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
- (void).cxx_destruct;
- (void)action;
@property(readonly, copy, nonatomic) NSDate *timestamp;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy, nonatomic) NSURL *entityURL;
@property(readonly, nonatomic) long long icon;
@property(readonly, copy, nonatomic) NSURL *imageURL;
- (id)initWithEntityListItem:(id)arg1 shouldShowSubtitleTimestamp:(_Bool)arg2 dateCalculator:(id)arg3;

@end

