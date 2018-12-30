//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSString;

@interface UARetailEventTemplate : NSObject
{
    _Bool _isNewItem;
    _Bool _newItemSet;
    NSDecimalNumber *_eventValue;
    NSString *_transactionID;
    NSString *_identifier;
    NSString *_category;
    NSString *_eventDescription;
    NSString *_brand;
    NSString *_eventName;
    NSString *_source;
    NSString *_medium;
}

+ (id)sharedProductTemplateWithValue:(id)arg1 withSource:(id)arg2 withMedium:(id)arg3;
+ (id)sharedProductTemplateWithValueFromString:(id)arg1 withSource:(id)arg2 withMedium:(id)arg3;
+ (id)sharedProductTemplateWithSource:(id)arg1 withMedium:(id)arg2;
+ (id)sharedProductTemplateWithValue:(id)arg1;
+ (id)sharedProductTemplateWithValueFromString:(id)arg1;
+ (id)sharedProductTemplate;
+ (id)purchasedTemplateWithValue:(id)arg1;
+ (id)purchasedTemplateWithValueFromString:(id)arg1;
+ (id)purchasedTemplate;
+ (id)starredProductTemplateWithValue:(id)arg1;
+ (id)starredProductTemplateWithValueFromString:(id)arg1;
+ (id)starredProductTemplate;
+ (id)addedToCartTemplateWithValue:(id)arg1;
+ (id)addedToCartTemplateWithValueFromString:(id)arg1;
+ (id)addedToCartTemplate;
+ (id)browsedTemplateWithValue:(id)arg1;
+ (id)browsedTemplateWithValueFromString:(id)arg1;
+ (id)browsedTemplate;
@property(nonatomic) _Bool newItemSet; // @synthesize newItemSet=_newItemSet;
@property(copy, nonatomic) NSString *medium; // @synthesize medium=_medium;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(nonatomic) _Bool isNewItem; // @synthesize isNewItem=_isNewItem;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(copy, nonatomic) NSString *eventDescription; // @synthesize eventDescription=_eventDescription;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(retain, nonatomic) NSDecimalNumber *eventValue; // @synthesize eventValue=_eventValue;
- (void).cxx_destruct;
- (id)createEvent;
- (id)initWithName:(id)arg1 withValue:(id)arg2 withSource:(id)arg3 withMedium:(id)arg4;

@end

