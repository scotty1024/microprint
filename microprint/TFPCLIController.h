//
//  TFPCLIController.h
//  microprint
//
//  Created by Tomas Franzén on Sun 2015-06-28.
//  Copyright (c) 2015 Tomas Franzén. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TFPCLIController : NSObject
- (void)runWithArgumentCount:(int)argc arguments:(char **)argv;
@end
