//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_PBMutableArray, GCKPB_PlayStoreUiElementInfo, NSData;

@interface GCKPB_PlayStoreUiElement : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPB_PBMutableArray *childArray; // @dynamic childArray;
@property(retain, nonatomic) GCKPB_PlayStoreUiElementInfo *clientLogsCookie; // @dynamic clientLogsCookie;
@property(nonatomic) _Bool hasChildArray; // @dynamic hasChildArray;
@property(nonatomic) _Bool hasClientLogsCookie; // @dynamic hasClientLogsCookie;
@property(nonatomic) _Bool hasServerLogsCookie; // @dynamic hasServerLogsCookie;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) NSData *serverLogsCookie; // @dynamic serverLogsCookie;
@property(nonatomic) int type; // @dynamic type;

@end

