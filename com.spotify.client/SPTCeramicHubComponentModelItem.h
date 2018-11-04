//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicDescribableItem.h"
#import "SPTCeramicItem.h"
#import "SPTCeramicItemWithIcon.h"
#import "SPTCeramicItemWithMetaDataTitle.h"
#import "SPTCeramicItemWithNotification.h"

@class NSDictionary, NSString, NSURL;

@interface SPTCeramicHubComponentModelItem : NSObject <SPTCeramicItem, SPTCeramicItemWithIcon, SPTCeramicDescribableItem, SPTCeramicItemWithMetaDataTitle, SPTCeramicItemWithNotification>
{
    id <HUBComponentModel> _componentModel;
}

@property(readonly, nonatomic) id <HUBComponentModel> componentModel; // @synthesize componentModel=_componentModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *metaData;
@property(readonly, copy, nonatomic) NSString *metaDataTitle;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) long long icon;
- (id)placeholderImageForSize:(long long)arg1;
@property(readonly, nonatomic, getter=isPreviewable) _Bool previewable;
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithComponentModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <NSCoding> loggingData;
@property(readonly) Class superclass;

@end

