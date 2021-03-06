//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Artist, DescriptionAttributes, GPMImageRefList, MusicItem, NSArray, NSString;

@interface GPMRadioStationAnnotation : NSObject
{
    NSString *_title;
    NSString *_descriptionProperty;
    NSString *_profileName;
    GPMImageRefList *_profileOwnerImageRefList;
    GPMImageRefList *_stationImageRefList;
    GPMImageRefList *_artImageRefList;
    GPMImageRefList *_headerImageRefList;
    MusicItem *_seedItem;
    DescriptionAttributes *_descriptionAttributes;
    NSArray *_relatedGroups;
}

@property(copy, nonatomic) NSArray *relatedGroups; // @synthesize relatedGroups=_relatedGroups;
@property(retain, nonatomic) DescriptionAttributes *descriptionAttributes; // @synthesize descriptionAttributes=_descriptionAttributes;
@property(retain, nonatomic) MusicItem *seedItem; // @synthesize seedItem=_seedItem;
@property(retain, nonatomic) GPMImageRefList *headerImageRefList; // @synthesize headerImageRefList=_headerImageRefList;
@property(retain, nonatomic) GPMImageRefList *artImageRefList; // @synthesize artImageRefList=_artImageRefList;
@property(retain, nonatomic) GPMImageRefList *stationImageRefList; // @synthesize stationImageRefList=_stationImageRefList;
@property(retain, nonatomic) GPMImageRefList *profileOwnerImageRefList; // @synthesize profileOwnerImageRefList=_profileOwnerImageRefList;
@property(copy, nonatomic) NSString *profileName; // @synthesize profileName=_profileName;
@property(copy, nonatomic) NSString *descriptionProperty; // @synthesize descriptionProperty=_descriptionProperty;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (unsigned long long)groupTypeFromString:(id)arg1;
- (id)relatedGroupsFromRelatedGroups:(id)arg1;
- (id)seedItemFromSeedMetadata:(id)arg1;
@property(readonly, nonatomic) Artist *artist;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSJRadioStationAnnotationResponse:(id)arg1;

@end

