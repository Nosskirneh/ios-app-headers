//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSString;

@interface UAMediaEventTemplate : NSObject
{
    _Bool _isFeature;
    _Bool _featureSet;
    NSString *_identifier;
    NSString *_category;
    NSString *_type;
    NSString *_eventDescription;
    NSString *_author;
    NSString *_publishedDate;
    NSString *_eventName;
    NSString *_source;
    NSString *_medium;
    NSDecimalNumber *_eventValue;
}

+ (id)consumedTemplateWithValue:(id)arg1;
+ (id)consumedTemplateWithValueFromString:(id)arg1;
+ (id)consumedTemplate;
+ (id)sharedTemplate;
+ (id)sharedTemplateWithSource:(id)arg1 withMedium:(id)arg2;
+ (id)starredTemplate;
+ (id)browsedTemplate;
@property(nonatomic) _Bool featureSet; // @synthesize featureSet=_featureSet;
@property(retain, nonatomic) NSDecimalNumber *eventValue; // @synthesize eventValue=_eventValue;
@property(copy, nonatomic) NSString *medium; // @synthesize medium=_medium;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *publishedDate; // @synthesize publishedDate=_publishedDate;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(nonatomic) _Bool isFeature; // @synthesize isFeature=_isFeature;
@property(copy, nonatomic) NSString *eventDescription; // @synthesize eventDescription=_eventDescription;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)createEvent;
- (id)initWithName:(id)arg1 withValue:(id)arg2 withSource:(id)arg3 withMedium:(id)arg4;

@end

