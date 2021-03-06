//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGContentSectionList.h"

@class NSArray, NSURL;

@interface ANGContentSectionBar : ANGContentSectionList
{
    NSURL *_deeplink;
    _Bool _isProfile;
    NSArray *_imageURLs;
}

@property _Bool isProfile; // @synthesize isProfile=_isProfile;
@property(readonly, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
- (void).cxx_destruct;
- (id)amplitudeEventSectionType;
- (_Bool)disableExtraSpacing;
- (_Bool)sectionNeedsUpperSpacing;
- (void)deeplinkHanlder;
- (id)cellForObject:(id)arg1 tableView:(id)arg2;
- (double)heightForContentRow:(id)arg1 tableView:(id)arg2;
- (long long)numberOfContentRows;
- (_Bool)hasMoreButtton;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)type;
- (id)initWithSectionDictionary:(id)arg1;

@end

