//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMDCAlertScheming-Protocol.h"

@class MDCAlertScheme;
@protocol GMDCColorScheming, GMDCTypographyScheming, MDCAlertScheming;

@interface GMDCAlertScheme : NSObject <GMDCAlertScheming>
{
    MDCAlertScheme *_mdcAlertScheme;
    id <GMDCColorScheming> _gmdcColorScheme;
    id <GMDCTypographyScheming> _gmdcTypographyScheme;
    double _cornerRadius;
    double _elevation;
}

@property(nonatomic) double elevation; // @synthesize elevation=_elevation;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) id <GMDCTypographyScheming> gmdcTypographyScheme; // @synthesize gmdcTypographyScheme=_gmdcTypographyScheme;
@property(retain, nonatomic) id <GMDCColorScheming> gmdcColorScheme; // @synthesize gmdcColorScheme=_gmdcColorScheme;
@property(readonly, nonatomic) id <MDCAlertScheming> mdcAlertScheme; // @synthesize mdcAlertScheme=_mdcAlertScheme;
- (void).cxx_destruct;
- (id)init;

@end

