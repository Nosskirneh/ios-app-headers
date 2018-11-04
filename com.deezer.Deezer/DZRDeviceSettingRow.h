//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRSettingRow.h"

@class NSString, UIImage;

@interface DZRDeviceSettingRow : DZRSettingRow
{
    NSString *_deviceName;
    NSString *_subtitle;
    UIImage *_image;
}

+ (id)rowWithDeviceName:(id)arg1 subtitle:(id)arg2 image:(id)arg3 reuseIdentifier:(id)arg4 rowIdentifier:(unsigned long long)arg5;
+ (id)rowWithDeviceName:(id)arg1 subtitle:(id)arg2 image:(id)arg3 reuseIdentifier:(id)arg4;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void).cxx_destruct;
- (id)initWithDeviceName:(id)arg1 subtitle:(id)arg2 image:(id)arg3 reuseIdentifier:(id)arg4 rowIdentifier:(unsigned long long)arg5;

@end

