//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SPTDrivingModeHomeFeedShelf : NSObject
{
    NSString *_title;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqualToShelf:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 items:(id)arg2;

@end

