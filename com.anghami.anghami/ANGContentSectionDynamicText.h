//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGContentSectionText.h"

@class NSArray, NSString;

@interface ANGContentSectionDynamicText : ANGContentSectionText
{
    NSArray *_hashTags;
    NSString *_contentDescription;
    NSString *_hashTagsTextColor;
}

@property(retain, nonatomic) NSString *hashTagsTextColor; // @synthesize hashTagsTextColor=_hashTagsTextColor;
@property(retain, nonatomic) NSString *contentDescription; // @synthesize contentDescription=_contentDescription;
@property(retain, nonatomic) NSArray *hashTags; // @synthesize hashTags=_hashTags;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getHashTagsText;
- (id)getRangesArray;
- (id)text;
- (id)getTappedHashTagWithString:(id)arg1;
- (void)attachHashTagClick:(id)arg1;
- (void)setHashTagsColor:(id)arg1;
- (id)cellForObject:(id)arg1 tableView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)type;
- (id)initWithSectionDictionary:(id)arg1;

@end

