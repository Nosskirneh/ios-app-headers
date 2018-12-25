//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, NSURL, UIImage;

@protocol PDLPersonPhoto <NSCopying, NSCoding, NSObject>
@property(readonly, nonatomic) NSString *deviceContactID;
@property(readonly, nonatomic) _Bool isDefault;
@property(readonly, nonatomic) NSString *URLString;
- (UIImage *)imageForDeviceContact;
- (NSURL *)imageURLForSize:(struct CGSize)arg1;
@end

