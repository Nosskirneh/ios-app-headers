//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol DZRDynamicPageItem;

@interface DZRDynamicPageData : NSObject
{
    NSString *_pageId;
    NSString *_title;
    id <DZRDynamicPageItem> _item;
    long long _refreshRate;
    NSArray *_sections;
}

@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) long long refreshRate; // @synthesize refreshRate=_refreshRate;
@property(retain, nonatomic) id <DZRDynamicPageItem> item; // @synthesize item=_item;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;
- (_Bool)hasData;
- (id)init;

@end
