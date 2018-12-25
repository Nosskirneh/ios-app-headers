//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, UILocalizedIndexedCollation;

@interface LSTLocalizedIndexedCollation : NSObject
{
    NSLocale *_sortingLocale;
    UILocalizedIndexedCollation *_currentSystemCollation;
    NSArray *_internalSectionTitles;
    NSArray *_internalSectionIndexTitles;
}

+ (id)augmentCharacterSet:(id)arg1;
+ (id)sortStringArray:(id)arg1 forLocale:(id)arg2;
+ (long long)sectionForString:(id)arg1 sortedSectionTitles:(id)arg2 locale:(id)arg3;
+ (id)sortingLocaleForLocale:(id)arg1 localeMap:(id)arg2;
+ (id)contactsLocaleMap;
+ (id)japaneseSectionTitles;
+ (id)currentCollationForContacts;
+ (id)currentCollationForLocaleIdentifierMap:(id)arg1;
+ (id)currentCollation;
@property(retain, nonatomic) NSArray *internalSectionIndexTitles; // @synthesize internalSectionIndexTitles=_internalSectionIndexTitles;
@property(retain, nonatomic) NSArray *internalSectionTitles; // @synthesize internalSectionTitles=_internalSectionTitles;
@property(retain, nonatomic) UILocalizedIndexedCollation *currentSystemCollation; // @synthesize currentSystemCollation=_currentSystemCollation;
@property(retain, nonatomic) NSLocale *sortingLocale; // @synthesize sortingLocale=_sortingLocale;
- (void).cxx_destruct;
- (id)collationStringByInvokingSelector:(SEL)arg1 onObject:(id)arg2;
- (id)sortStringArray:(id)arg1;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
- (long long)sectionForSectionIndexTitleAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
@property(readonly, nonatomic) NSArray *sectionTitles;
- (id)initForLocaleIdentifierMap:(id)arg1;

@end

