//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRDynamicPageItem-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface DZRDynamicPageVideo : NSObject <DZRDynamicPageItem>
{
    _Bool _available;
    NSObject *_contentObject;
    NSDictionary *_jsonDictionary;
    NSDictionary *_contentDictionary;
    NSArray *_actions;
    NSArray *_illustrations;
    NSString *_itemId;
    NSString *_label;
    NSString *_itemDescription;
    NSArray *_pictures;
    NSString *_accessibilityTitle;
    NSString *_title;
    NSString *_titleComplement;
    NSString *_subtitle;
    NSString *_subtitleComplement;
    NSString *_caption;
    NSString *_coverTitle;
    NSString *_coverSubtitle;
    long long _weight;
    long long _theme;
    long long _cellAccessoryType;
    long long _type;
}

+ (void)load;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long cellAccessoryType; // @synthesize cellAccessoryType=_cellAccessoryType;
@property(nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(nonatomic) long long theme; // @synthesize theme=_theme;
@property(nonatomic) long long weight; // @synthesize weight=_weight;
@property(copy, nonatomic) NSString *coverSubtitle; // @synthesize coverSubtitle=_coverSubtitle;
@property(copy, nonatomic) NSString *coverTitle; // @synthesize coverTitle=_coverTitle;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSString *subtitleComplement; // @synthesize subtitleComplement=_subtitleComplement;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *titleComplement; // @synthesize titleComplement=_titleComplement;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle=_accessibilityTitle;
@property(copy, nonatomic) NSArray *pictures; // @synthesize pictures=_pictures;
@property(copy, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSArray *illustrations; // @synthesize illustrations=_illustrations;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSDictionary *contentDictionary; // @synthesize contentDictionary=_contentDictionary;
@property(retain, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property(retain, nonatomic) NSObject *contentObject; // @synthesize contentObject=_contentObject;
- (void).cxx_destruct;
- (id)actionOfKind:(id)arg1;
- (id)availableActions;
- (id)valueForUndefinedKey:(id)arg1;
- (id)additionalInfoForKey:(id)arg1;
- (id)slideshowButtonAction;
- (id)playableObject;
- (long long)typeForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)accessibilityLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

