//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMLogEvent.h"

@class NSString;
@protocol GPMUILogEventInfo;

@interface GPMUILogEvent : GPMLogEvent
{
    id <GPMUILogEventInfo> _item;
    long long _section;
    long long _positionInContainer;
    NSString *_collectionType;
    long long _collectionPosition;
    NSString *_distilledContextToken;
}

@property(copy, nonatomic) NSString *distilledContextToken; // @synthesize distilledContextToken=_distilledContextToken;
@property(nonatomic) long long collectionPosition; // @synthesize collectionPosition=_collectionPosition;
@property(copy, nonatomic) NSString *collectionType; // @synthesize collectionType=_collectionType;
@property(nonatomic) long long positionInContainer; // @synthesize positionInContainer=_positionInContainer;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(retain, nonatomic) id <GPMUILogEventInfo> item; // @synthesize item=_item;
- (void).cxx_destruct;
- (struct NSDictionary *)tagDictionary;
- (id)playLogCard;
- (id)initWithItem:(id)arg1 inSection:(long long)arg2 collectionType:(id)arg3 collectionPosition:(long long)arg4 positionInContainer:(long long)arg5 distilledContextToken:(id)arg6;

@end
