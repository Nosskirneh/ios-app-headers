//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContentSectionLoader.h"

@class HashTag, NSDictionary, NSSet, SearchTag, Tag;

@interface TagContentLoader : ContentSectionLoader
{
    _Bool _sortByFollowers;
    _Bool _sortable;
    Tag *_tag;
    NSDictionary *_parameters;
    NSSet *_supportedLanguages;
    unsigned long long _musicLanguage;
}

@property(nonatomic) _Bool sortable; // @synthesize sortable=_sortable;
@property(nonatomic) _Bool sortByFollowers; // @synthesize sortByFollowers=_sortByFollowers;
@property(nonatomic) unsigned long long musicLanguage; // @synthesize musicLanguage=_musicLanguage;
@property(retain, nonatomic) NSSet *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) Tag *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (_Bool)isSurpriseMeLoader;
- (_Bool)didHandleParsingData:(id)arg1;
- (id)apiVerson;
- (id)actionString;
- (id)requestParams;
- (int)type;
@property(readonly, nonatomic) HashTag *hashTag;
@property(readonly, nonatomic) SearchTag *searchTag;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTag:(id)arg1 andParameters:(id)arg2 delegate:(id)arg3;

@end

