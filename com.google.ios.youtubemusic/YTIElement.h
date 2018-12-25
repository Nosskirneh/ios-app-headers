//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTElementAttributesRepresentable-Protocol.h"
#import "YTElementTransformable-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString, YTIAnimatedVectorType, YTIButtonType, YTICellType, YTICollectionType, YTIContainerType, YTIElementProperties, YTIEngagementToolbarElement, YTIImageType, YTILoggingDirectives, YTIOldSwitchType, YTIPollType, YTIReactionToolbarType, YTIStoreMapping, YTISubscribeType, YTITemplate, YTITextType, YTIVideoWithContextType;

@interface YTIElement : GPBMessage <YTElementAttributesRepresentable, YTElementTransformable>
{
}

+ (id)descriptor;
- (void)applyLoggingInfoWithObject:(id)arg1;
- (id)initWithElementAttributes:(struct NSDictionary *)arg1;
@property(readonly, nonatomic) YTIElement *element;
- (id)buildNodeWithContext:(id)arg1;
- (id)type;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToProperties:(id)arg1;
- (_Bool)isSameTypeAsElement:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)buildWithContext:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType creationBlock;

// Remaining properties
@property(retain, nonatomic) YTIAnimatedVectorType *animatedVectorType; // @dynamic animatedVectorType;
@property(retain, nonatomic) YTIButtonType *buttonType; // @dynamic buttonType;
@property(retain, nonatomic) YTICellType *cellType; // @dynamic cellType;
@property(retain, nonatomic) NSMutableArray *childElementsArray; // @dynamic childElementsArray;
@property(readonly, nonatomic) unsigned long long childElementsArray_Count; // @dynamic childElementsArray_Count;
@property(retain, nonatomic) YTICollectionType *collectionType; // @dynamic collectionType;
@property(retain, nonatomic) YTIContainerType *containerType; // @dynamic containerType;
@property(readonly, nonatomic) NSArray *datasArray;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *elementData;
@property(retain, nonatomic) YTIEngagementToolbarElement *engagementToolbarElement; // @dynamic engagementToolbarElement;
@property(nonatomic) _Bool hasAnimatedVectorType; // @dynamic hasAnimatedVectorType;
@property(nonatomic) _Bool hasButtonType; // @dynamic hasButtonType;
@property(nonatomic) _Bool hasCellType; // @dynamic hasCellType;
@property(nonatomic) _Bool hasCollectionType; // @dynamic hasCollectionType;
@property(nonatomic) _Bool hasContainerType; // @dynamic hasContainerType;
@property(nonatomic) _Bool hasEngagementToolbarElement; // @dynamic hasEngagementToolbarElement;
@property(nonatomic) _Bool hasImageType; // @dynamic hasImageType;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasLoggingDirectives; // @dynamic hasLoggingDirectives;
@property(nonatomic) _Bool hasPollType; // @dynamic hasPollType;
@property(nonatomic) _Bool hasProperties; // @dynamic hasProperties;
@property(nonatomic) _Bool hasReactionToolbarType; // @dynamic hasReactionToolbarType;
@property(nonatomic) _Bool hasRef; // @dynamic hasRef;
@property(nonatomic) _Bool hasStoreMapping; // @dynamic hasStoreMapping;
@property(nonatomic) _Bool hasSubscribeType; // @dynamic hasSubscribeType;
@property(nonatomic) _Bool hasSwitchType; // @dynamic hasSwitchType;
@property(nonatomic) _Bool hasTemplate_p; // @dynamic hasTemplate_p;
@property(nonatomic) _Bool hasTextType; // @dynamic hasTextType;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoWithContextType; // @dynamic hasVideoWithContextType;
@property(retain, nonatomic) YTIImageType *imageType; // @dynamic imageType;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) YTILoggingDirectives *loggingDirectives; // @dynamic loggingDirectives;
@property(retain, nonatomic) YTIPollType *pollType; // @dynamic pollType;
@property(retain, nonatomic) YTIElementProperties *properties; // @dynamic properties;
@property(retain, nonatomic) YTIReactionToolbarType *reactionToolbarType; // @dynamic reactionToolbarType;
@property(copy, nonatomic) NSString *ref; // @dynamic ref;
@property(readonly, nonatomic) NSArray *sheetsArray;
@property(retain, nonatomic) YTIStoreMapping *storeMapping; // @dynamic storeMapping;
@property(retain, nonatomic) YTISubscribeType *subscribeType; // @dynamic subscribeType;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIOldSwitchType *switchType; // @dynamic switchType;
@property(retain, nonatomic) YTITemplate *template_p; // @dynamic template_p;
@property(readonly, nonatomic) NSArray *templatesArray;
@property(retain, nonatomic) YTITextType *textType; // @dynamic textType;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIVideoWithContextType *videoWithContextType; // @dynamic videoWithContextType;

@end
