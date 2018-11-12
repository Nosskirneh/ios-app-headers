//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRSettingRow.h"

@class NSString, UIImage;

@interface DZRBasicSettingRow : DZRSettingRow
{
    NSString *_text;
    UIImage *_image;
    long long _accessoryType;
}

+ (id)rowWithText:(id)arg1 resizableText:(_Bool)arg2 image:(id)arg3 rowIdentifier:(unsigned long long)arg4;
+ (id)rowWithText:(id)arg1 image:(id)arg2 rowIdentifier:(unsigned long long)arg3;
+ (id)rowWithText:(id)arg1 rowIdentifier:(unsigned long long)arg2;
+ (id)rowWithText:(id)arg1 image:(id)arg2;
+ (id)rowWithText:(id)arg1;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1 image:(id)arg2;

@end
