//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class WMPImageService;

@interface _TtC4WiMP20ActivityItemProvider : UIActivityItemProvider
{
    // Error parsing type: , name: sharingItem
    // Error parsing type: , name: imageService
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithPlaceholderItem:(id)arg1;
- (void)tagSharingEventFor:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
@property(nonatomic, readonly) WMPImageService *imageService; // @synthesize imageService;

@end
