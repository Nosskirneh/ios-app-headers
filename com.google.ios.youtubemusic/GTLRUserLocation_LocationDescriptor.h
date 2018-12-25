//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRUserLocation_FeatureIdProto, GTLRUserLocation_LatLng, GTLRUserLocation_LatLngRect, GTLRUserLocation_LocationAttributesProto, NSArray, NSNumber, NSString;

@interface GTLRUserLocation_LocationDescriptor : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) GTLRUserLocation_LocationAttributesProto *attributes; // @dynamic attributes;
@property(retain, nonatomic) NSNumber *confidence; // @dynamic confidence;
@property(copy, nonatomic) NSString *diagnosticInfo; // @dynamic diagnosticInfo;
@property(retain, nonatomic) GTLRUserLocation_FeatureIdProto *featureId; // @dynamic featureId;
@property(copy, nonatomic) NSString *historicalProducer; // @dynamic historicalProducer;
@property(retain, nonatomic) NSNumber *historicalProminence; // @dynamic historicalProminence;
@property(copy, nonatomic) NSString *historicalRole; // @dynamic historicalRole;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(retain, nonatomic) GTLRUserLocation_LatLng *latlng; // @dynamic latlng;
@property(retain, nonatomic) GTLRUserLocation_LatLng *latlngSpan; // @dynamic latlngSpan;
@property(retain, nonatomic) GTLRUserLocation_FeatureIdProto *levelFeatureId; // @dynamic levelFeatureId;
@property(retain, nonatomic) NSNumber *levelNumber; // @dynamic levelNumber;
@property(copy, nonatomic) NSString *loc; // @dynamic loc;
@property(retain, nonatomic) NSNumber *mid; // @dynamic mid;
@property(retain, nonatomic) NSArray *presenceIntervals; // @dynamic presenceIntervals;
@property(copy, nonatomic) NSString *producer; // @dynamic producer;
@property(copy, nonatomic) NSString *provenance; // @dynamic provenance;
@property(retain, nonatomic) NSNumber *radius; // @dynamic radius;
@property(retain, nonatomic) GTLRUserLocation_LatLngRect *rect; // @dynamic rect;
@property(copy, nonatomic) NSString *role; // @dynamic role;
@property(retain, nonatomic) NSArray *semanticPlaces; // @dynamic semanticPlaces;
@property(retain, nonatomic) NSArray *semantics; // @dynamic semantics;
@property(retain, nonatomic) NSNumber *timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSArray *visibleNetworks; // @dynamic visibleNetworks;

@end

