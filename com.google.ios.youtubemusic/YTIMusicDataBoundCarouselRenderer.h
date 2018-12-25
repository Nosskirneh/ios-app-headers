//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMusicEntityReference, YTIRenderer;

@interface YTIMusicDataBoundCarouselRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int albumDetailField; // @dynamic albumDetailField;
@property(nonatomic) int albumField; // @dynamic albumField;
@property(retain, nonatomic) YTIMusicEntityReference *entityReference; // @dynamic entityReference;
@property(nonatomic) _Bool hasAlbumDetailField; // @dynamic hasAlbumDetailField;
@property(nonatomic) _Bool hasAlbumField; // @dynamic hasAlbumField;
@property(nonatomic) _Bool hasEntityReference; // @dynamic hasEntityReference;
@property(nonatomic) _Bool hasMusicCarouselListItemMold; // @dynamic hasMusicCarouselListItemMold;
@property(nonatomic) _Bool hasShelfMold; // @dynamic hasShelfMold;
@property(retain, nonatomic) YTIRenderer *musicCarouselListItemMold; // @dynamic musicCarouselListItemMold;
@property(retain, nonatomic) YTIRenderer *shelfMold; // @dynamic shelfMold;

@end

