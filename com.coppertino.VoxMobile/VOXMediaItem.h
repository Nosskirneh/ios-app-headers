//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_VOXMediaItem.h"

#import "_TtP3VOX18SpotlightIndexable_-Protocol.h"

@class NSString;

@interface VOXMediaItem : _VOXMediaItem <_TtP3VOX18SpotlightIndexable_>
{
}

+ (_Bool)contextShouldIgnoreUnmodeledPropertyChanges;
- (id)cs_thumbnailURLString;
- (id)cs_duration;
- (id)cs_contentDescription;
- (id)cs_contentTitle;
- (id)cs_contentDomain;
- (id)cs_itemID;
- (_Bool)cs_shouldIndex;
@property(readonly, nonatomic) _Bool shouldIndexForSearch;
@property(readonly, nonatomic) NSString *sourceName;
@property(readonly, nonatomic) unsigned long long ftsEntityType;
@property(readonly, nonatomic) NSString *ftsSearchIndex;
- (void)setTitle:(id)arg1;
- (void)awakeFromInsert;

@end

