package org.gephi.filters.api;

import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author Martin Škurla
 */
public class RangeTest {

    @Test
    public void testNumberRangeIsInRange() {
        Range<Number> rangeRefactored = new Range<Number>(1, 25);

        assertTrue(rangeRefactored.isInRange(10));

        assertFalse(rangeRefactored.isInRange(30));
    }
}