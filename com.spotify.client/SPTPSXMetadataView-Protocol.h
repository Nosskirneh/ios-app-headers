//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, UIImage;

@protocol SPTPSXMetadataView <NSObject>
@property(readonly, nonatomic) struct CGSize ownerImageSize;
@property(nonatomic) double totalDuration;
@property(retain, nonatomic) NSDate *lastModifiedDate;
@property(copy, nonatomic) NSString *ownerName;
@property(retain, nonatomic) UIImage *ownerImage;
@property(copy, nonatomic) NSString *descriptionText;
@end

