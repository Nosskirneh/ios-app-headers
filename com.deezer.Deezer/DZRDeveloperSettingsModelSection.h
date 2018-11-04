//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface DZRDeveloperSettingsModelSection : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_sectionDescription;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *sectionDescription; // @synthesize sectionDescription=_sectionDescription;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)replaceItemsInRange:(struct _NSRange)arg1 withItems:(id)arg2;
- (id)addItem:(id)arg1;
- (id)initWithTitle:(id)arg1 description:(id)arg2 andItems:(id)arg3;

@end

