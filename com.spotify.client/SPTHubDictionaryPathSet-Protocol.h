//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@protocol SPTHubDictionaryPathSet <NSObject>
@property(retain, nonatomic) id <SPTHubDictionaryDictionaryPath> metadataPath;
@property(retain, nonatomic) id <SPTHubDictionaryDictionaryPath> itemLoggingDataPath;
@property(retain, nonatomic) id <SPTHubDictionaryDatePath> itemDatePath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> itemDescriptionTextPath;
@property(retain, nonatomic) id <SPTHubDictionaryDictionaryPath> itemMetaDataPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> itemMetaDataTitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> itemTargetExternalDataEndpointPath;
@property(retain, nonatomic) id <SPTHubDictionaryHeaderViewStylePath> itemTargetViewHeaderStylePath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> itemTargetViewTitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryTargetTypePath> itemTargetTypePath;
@property(retain, nonatomic) id <SPTHubDictionaryURLPath> itemTargetURLPath;
@property(retain, nonatomic) id <SPTHubDictionaryBoolPath> itemIsContextMenuCompatiblePath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> itemStyleHintPath;
@property(retain, nonatomic) id <SPTHubDictionaryBoolPath> itemIsPreviewablePath;
@property(retain, nonatomic) id <SPTHubDictionaryImageDecorationPath> itemImageDecorationPath;
@property(retain, nonatomic) id <SPTHubDictionaryImageStylePath> itemImageStylePath;
@property(retain, nonatomic) id <SPTHubDictionaryIconPath> itemIconPath;
@property(retain, nonatomic) id <SPTHubDictionaryURLPath> itemImageURLPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> itemSubtitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> itemTitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryItemTypePath> itemTypePath;
@property(retain, nonatomic) id <SPTHubDictionaryPath> itemDictionariesPath;
@property(retain, nonatomic) id <SPTHubDictionaryHeaderViewStylePath> blockFooterTargetViewHeaderStylePath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> blockFooterTargetViewTitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryURLPath> blockFooterTargetURLPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> blockFooterTitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryHeaderViewStylePath> blockHeaderAccessoryButtonTargetViewHeaderStylePath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> blockHeaderAccessoryButtonTargetViewTitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryURLPath> blockHeaderAccessoryButtonTargetURLPath;
@property(retain, nonatomic) id <SPTHubDictionaryIconPath> blockHeaderAccessoryButtonIconPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> blockHeaderAccessoryButtonTitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> blockHeaderDescriptionTextPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> blockHeaderAlignmentPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> blockHeaderSubtitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> blockHeaderTitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryURLPath> blockBackgroundImageURLPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> blockComponentIdentifierPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> blockContentIdentifierPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> blockIdentifierPath;
@property(retain, nonatomic) id <SPTHubDictionaryPath> blockDictionariesPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> tabItemBlockIdentifierPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> tabItemTitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryUnsignedIntegerPath> initiallySelectedTabItemIndexPath;
@property(retain, nonatomic) id <SPTHubDictionaryPath> tabItemDictionariesPath;
@property(retain, nonatomic) id <SPTHubDictionaryURLPath> instrumentationEntityURIPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> instrumentationPageIdentifierPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> instrumentationFeatureIdentifierPath;
@property(retain, nonatomic) id <SPTHubDictionaryURLPath> headerButtonTargetURLPath;
@property(retain, nonatomic) id <SPTHubDictionaryActionButtonIconAlignmentPath> headerButtonIconAlignmentPath;
@property(retain, nonatomic) id <SPTHubDictionaryActionButtonSizePath> headerButtonSizePath;
@property(retain, nonatomic) id <SPTHubDictionaryActionButtonStylePath> headerButtonStylePath;
@property(retain, nonatomic) id <SPTHubDictionaryTargetTypePath> headerButtonTargetTypePath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> headerButtonTitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryIconPath> headerButtonIconPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> headerSubtitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> headerTitlePath;
@property(retain, nonatomic) id <SPTHubDictionaryURLPath> headerBackgroundImageURLPath;
@property(retain, nonatomic) id <SPTHubDictionaryHeaderViewStylePath> headerStylePath;
@property(retain, nonatomic) id <SPTHubDictionaryUnsignedIntegerPath> datasetIndexPath;
@property(retain, nonatomic) id <SPTHubDictionaryStringPath> extensionEndpointPath;
- (id <SPTHubDictionaryDictionaryPath>)createCombinedDictionaryPathWithPaths:(NSDictionary *)arg1;
- (id <SPTHubMutableDictionaryPath>)createCombinedPathWithPaths:(NSArray *)arg1;
- (id <SPTHubMutableDictionaryPath>)createPath;
@end

