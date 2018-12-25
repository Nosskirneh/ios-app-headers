//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DDTTYLoggerColorProfile : NSObject
{
    unsigned long long mask;
    long long context;
    unsigned char fg_r;
    unsigned char fg_g;
    unsigned char fg_b;
    unsigned char bg_r;
    unsigned char bg_g;
    unsigned char bg_b;
    unsigned long long fgCodeIndex;
    NSString *fgCodeRaw;
    unsigned long long bgCodeIndex;
    NSString *bgCodeRaw;
    char fgCode[24];
    unsigned long long fgCodeLen;
    char bgCode[24];
    unsigned long long bgCodeLen;
    char resetCode[8];
    unsigned long long resetCodeLen;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithForegroundColor:(struct UIColor *)arg1 backgroundColor:(struct UIColor *)arg2 flag:(unsigned long long)arg3 context:(long long)arg4;

@end

