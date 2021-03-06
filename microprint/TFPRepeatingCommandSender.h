//
//  TFPRepeatingCommandSender.h
//  microprint
//
//  Created by Tomas Franzén on Sun 2015-06-28.
//  Copyright (c) 2015 Tomas Franzén. All rights reserved.
//

@import Foundation;
#import "TFPPrinter.h"


@interface TFPRepeatingCommandSender : NSObject
- (instancetype)initWithPrinter:(TFPPrinter*)printer;
- (void)start;

@property (copy) TFPGCode*(^nextCodeBlock)();
@property (copy) void(^stoppingBlock)();
@property (copy) void(^endedBlock)();
@end
